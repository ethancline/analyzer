#ifndef ROOT_THaInterface
#define ROOT_THaInterface

//////////////////////////////////////////////////////////////////////////
//
// THaInterface
// 
//////////////////////////////////////////////////////////////////////////

#include "TRint.h"

class TClass;

class THaInterface : public TRint {

public:
  THaInterface( const char* appClassName, int* argc, char** argv,
		void* options = NULL, int numOptions = 0, 
		Bool_t noLogo = kFALSE );
  virtual ~THaInterface();

  virtual void PrintLogo();

  static TClass* GetDecoder();
  static TClass* SetDecoder( TClass* c );

protected:
  static THaInterface*  fgAint;  //Pointer indicating that interface already exists

  ClassDef(THaInterface,0)  //Hall A Analyzer Interactive Interface
};

#endif
