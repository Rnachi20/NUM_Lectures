function getHex()  
{  
  
  var letters = "0123456789ABCDEF";     
  var color = '#';     
  for (var i = 0; i < 6; i++)   
    color += letters[(Math.floor(Math.random() * 16))];   
  return color;  
}  
function changeColor()  
{  
 var hex = getHex();  
 document.getElementById("hex").innerHTML = hex;  
 document.getElementsByTagName("BODY")[0].style.backgroundColor = hex;  
}