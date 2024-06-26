/*
* ============================================================================
*  Name     : CMesayngers60v2App from Mesayngers60v2App.cpp
*  Part of  : mesayngers60v2
*  Created  : 4/9/2024 by adinandradrs
*  Implementation notes:
*
*     Initial content was generated by Series 60 AppWizard.
*  Version  :
*  Copyright: 
* ============================================================================
*/

#include    "Mesayngers60v2App.h"
#include    "Mesayngers60v2Document.h"

TUid CMesayngers60v2App::AppDllUid() const {
    return KUidmesayngers60v2;
}

   
CApaDocument* CMesayngers60v2App::CreateDocumentL() {
    return CMesayngers60v2Document::NewL( *this );
}

EXPORT_C CApaApplication* NewApplication() {
    return new CMesayngers60v2App;
}

GLDEF_C TInt E32Dll( TDllReason ) {
    return KErrNone;
}