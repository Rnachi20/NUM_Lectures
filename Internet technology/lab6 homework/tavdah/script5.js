const form = document.querySelector('form');

form.addEventListener('submit', function(e){
    e.preventDefault();
    
    const height = parseInt(document.querySelector('#height').value);
    const weight = parseInt(document.querySelector('#weight').value);
    const results = document.querySelector('#results');
    const container = document.querySelector('#container');
    
    if((height === '') || (height < 0) || (isNaN(height))){

        results.innerHTML = "Please provide a valid height";
        
    } else if (weight === '' || weight < 0 || isNaN(weight)){
        results.innerHTML = "Please provide a valid weight";
    } else {

    const bmi = (weight / ((height*height)/10000)).toFixed(2);

    results.innerHTML = `<span>${bmi}</span>`
    }

    if (bmi < 18.6){
        category = "Туранхай";
        container.style.backgroundColor = "#F2A9F1";

    }else if( bmi >= 18.6 && bmi <= 24.9 ){
        category = "Хэвийн жинтэй";
        container.style.backgroundColor = "#46D0FA";

    }else if(bmi > 24.9){
        category = "Илүүдэл жинтэй";
        container.style.backgroundColor = "#EE2626";

    }
});
