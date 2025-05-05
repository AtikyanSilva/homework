// Marker cluster group
const markers = L.markerClusterGroup();
  
// Custom marker icons
function getMarkerIcon(value) {
  if (value > 100)
    return new L.Icon({ iconUrl: 'https://cdn-icons-png.flaticon.com/512/179/179283.png', iconSize: [25, 25] });
  if (value > 50)
    return new L.Icon({ iconUrl: 'https://cdn-icons-png.flaticon.com/512/179/179278.png', iconSize: [25, 25] });
  return new L.Icon({ iconUrl: 'https://cdn-icons-png.flaticon.com/512/179/179274.png', iconSize: [25, 25] });
}

function getColor(value) {
  if (value > 100) return 'red';
  if (value > 50) return 'orange';
  return 'green';
}

async function fetchAirQualityData() {
  try {
    const response = await fetch('https://api.openaq.org/v3/latest?parameter=pm25&limit=1000');
    const data = await response.json();

    data.results.forEach(location => {
      const { coordinates, measurements, city, country } = location;
      if (coordinates && measurements.length > 0) {
        const pm25 = measurements.find(m => m.parameter === 'pm25');
        if (pm25) {
          const marker = L.marker([coordinates.latitude, coordinates.longitude], {
            icon: getMarkerIcon(pm25.value)
    