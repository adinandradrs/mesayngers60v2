/*
* ============================================================================
*  Name     : CMesayngers60v2AppUi from Mesayngers60v2AppUi.h
*  Part of  : mesayngers60v2
*  Created  : 4/9/2024 by adinandradrs
*  Description:
*     Declares UI class for application.
*  Version  :
*  Copyright: 
* ============================================================================
*/

#ifndef MESAYNGERS60V2APPUI_H
#define MESAYNGERS60V2APPUI_H

#include <eikapp.h>
#include <eikdoc.h>
#include <e32std.h>
#include <coeccntx.h>
#include <aknappui.h>

class CMesayngers60v2Container;

class CMesayngers60v2AppUi : public CAknAppUi {
    public:     
        void ConstructL();    
        ~CMesayngers60v2AppUi();
        
    public:

    public:

    private:
        void DynInitMenuPaneL(TInt aResourceId,CEikMenuPane* aMenuPane);

    private:
        void HandleCommandL(TInt aCommand);
        
        virtual TKeyResponse HandleKeyEventL(const TKeyEvent& aKeyEvent,TEventCode aType);

    private: 
        CMesayngers60v2Container* iAppContainer; 

};

#endif