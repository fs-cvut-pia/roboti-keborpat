#include <vector>
#include "Bludiste.h"
#include "Prohledavac.h"

class VasRobot : public Prohledavac {
public:
   bool start(Bludiste & map) {return true;};
   bool start(BludisteOdkryte & map) {return true;};
   bool stop() {};
   void krok(Bludiste & map);
   void krok(BludisteOdkryte & map) {};
   std::string jmeno() ;
;	
};
