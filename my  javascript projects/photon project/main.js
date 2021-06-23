const auth = "563492ad6f91700001000001d110deac7d4f4312b7633af09faecd85";
const gallery = document.querySelector(".gallery");
const searchInput = document.querySelector(".search-input");
const submitBtn= document.querySelector(".submit-btn");
let searchValue;


//event listners

searchInput.addEventListener('input', query)
submitBtn.addEventListener('click', searchPhotos(searchValue))

//fuctions


async function curatedPhotos(){
    //fetching data from api
    const datafetch = await fetch('https://api.pexels.com/v1/curated?per_page=15', {
        method: 'GET',
        headers:{
            Accept: 'application/json',
            Authorization: auth,
        }
    })
    //parsing as an json object
    const data = await datafetch.json()

    //appending to html
    data.photos.forEach(element => {

    const galleryDiv = document.createElement('div')
    galleryDiv.classList.add('gallery-img')
    galleryDiv.innerHTML = `
        <div class='img-info'>
        <a href='${element.photographer_url}'><p>${element.photographer}</p></a> 
        <a href='${element.src.original}'><p>download</p></a> 
        </div>
        <img src='${element.src.original}'>   
    `     
    gallery.appendChild(galleryDiv)
    });
    
}

function query(){
    searchValue = searchInput.value
    return searchValue
}

async function searchPhotos(query){

    console.log(searchValue);
    //fetching data from api
    const datafetch = await fetch(`"https://api.pexels.com/v1/search?query=${query}&per_page=1"https://api.pexels.com/v1/curated?per_page=15`, {
        method: 'GET',
        headers:{
            Accept: 'application/json',
            Authorization: auth,
        }
    })
    //parsing as an json object
    const data = await datafetch.json()
}

curatedPhotos()
