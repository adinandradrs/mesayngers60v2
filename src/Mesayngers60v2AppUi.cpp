/*
* ============================================================================
*  Name     : CMesayngers60v2AppUi from Mesayngers60v2AppUi.cpp
*  Part of  : mesayngers60v2
*  Created  : 4/9/2024 by adinandradrs
*  Implementation notes:
*     Initial content was generated by Series 60 AppWizard.
*  Version  :
*  Copyright: 
* ============================================================================
*/

#include "Mesayngers60v2AppUi.h"
#include "Mesayngers60v2Container.h" 
#include <mesayngers60v2.rsg>
#include "mesayngers60v2.hrh"

#include <avkon.hrh>

void CMesayngers60v2AppUi::ConstructL() {
    BaseConstructL();

    iAppContainer = new (ELeave) CMesayngers60v2Container;
    iAppContainer->SetMopParent( this );
    iAppContainer->ConstructL( ClientRect() );
    AddToStackL( iAppContainer );
}

CMesayngers60v2AppUi::~CMesayngers60v2AppUi() {
    if (iAppContainer) {
        RemoveFromStack( iAppContainer );
        delete iAppContainer;
    }
}

void CMesayngers60v2AppUi::DynInitMenuPaneL(TInt, CEikMenuPane* ) {
}


TKeyResponse CMesayngers60v2AppUi::HandleKeyEventL(const TKeyEvent&, TEventCode) {
    return EKeyWasNotConsumed;
}

void CMesayngers60v2AppUi::HandleCommandL(TInt aCommand) {
    switch ( aCommand ) {
        case EAknSoftkeyBack:
        case EEikCmdExit:
        {
            Exit();
            break;
        }
        case EAknExEditorCmdSelectEdwin1:
        case EAknExEditorCmdSelectEdwin2:
            iAppContainer->FocusTo(aCommand);
            break;
        case Emesayngers60v2CmdAppTest:
        {
            iEikonEnv->InfoMsg(_L("test"));
            break;
        }
        default:
            break;      
        }
}