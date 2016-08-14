#include <Brain.h>

///
Brain brain (Serial);

void setup() {    ////////// Inicializacion

  Serial.begin(9600);
  
}

void loop () {
    /// Expect packets about one per second
    /// FORMAT: signal strength, attention, meditation, delta, tetha, low alpha, low beta, high beta, low gamma, high gamma
    ///////////////////////////////////////////////////////////
    
    if (brain.update()) {
       Serial.println(brain.readErrors());
       Serial.println(brain.readCSV());
    }

}
