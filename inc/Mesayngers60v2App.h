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

// INCLUDES
#include <aknapp.h>

// CONSTANTS
// UID of the application
const TUid KUidmesayngers60v2 = { 0x012C3B09 };

// CLASS DECLARATION

/**
* CMesayngers60v2App application class.
* Provides factory to create concrete document object.
* 
*/
class CMesayngers60v2App : public CAknApplication
    {
    
    public: // Functions from base classes
    private:

        /**
        * From CApaApplication, creates CMesayngers60v2Document document object.
        * @return A pointer to the created document object.
        */
        CApaDocument* CreateDocumentL();
        
        /**
        * From CApaApplication, returns application's UID (KUidmesayngers60v2).
        * @return The value of KUidmesayngers60v2.
        */
        TUid AppDllUid() const;
    };

#endif

// End of File

