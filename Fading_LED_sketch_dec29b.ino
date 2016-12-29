
/* Fading LED. This Sketch is meant to have a single LED fade.
 *  I want to understand this code so I can use it to have an RGB LED
 *  fade through all the possible colour figurations. I don't want/need
 *  advice on how to do that :D no offence, I just want to figure it
 *  out on my own and ask questions about steps along the way. Such
 *  a step is down below. Of course, if I am completely barking up the
 *  wrong tree then please let me know. 
 *  
 *  I have removed all comments from this code, which is a sample code.
 *  I take it you don't need any comments, but if you do I can easily 
 *  supply any and all that were in the original Sketch.
 *  
 *  The reason that I tend to remove the comments is because I find 
 *  it difficult to read. So I read the comments and try and learn as 
 *  much as possible and then delete the comments.
 *  
 *  The original code was also structured slightly differently (G-style)
 *  (as in Geert-Style ;) ) and I restructered that as well so it is
 *  easier to read for me. If I made any mistakes, please let me know.
 */
 
int led = 9;           
int brightness = 0;    
int fadeAmount = 5;    


void setup() 
{
  pinMode(led, OUTPUT);
}

void loop() 
{
  
  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;


  if (brightness <= 0 || brightness >= 255)  //meaning of this line of code, specifically ||
  {
    fadeAmount = -fadeAmount; //what does this mean in Layman's terms
  }

  delay(30);
}
