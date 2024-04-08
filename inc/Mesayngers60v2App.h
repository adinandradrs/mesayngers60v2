/*
* ============================================================================
*  Name     : CMesayngers60v2App from Mesayngers60v2App.h
*  Part of  : mesayngers60v2
*  Created  : 4/9/2024 by adinandradrs
*  Description:
*     Declares main application class.
*  Version  :
*  Copyright: 
* ============================================================================
*/

#ifndef MESAYNGERS60V2APP_H
#define MESAYNGERS60V2APP_H

#include <aknapp.h>

const TUid KUidmesayngers60v2 = { 0x012C3B09 };

class CMesayngers60v2App : public CAknApplication {
    
    public:

    private:
        CApaDocument* CreateDocumentL();
        TUid AppDllUid() const;
};

#endif