/*
* ============================================================================
*  Name     : CMesayngers60v2Container from Mesayngers60v2Container.h
*  Part of  : mesayngers60v2
*  Created  : 4/9/2024 by adinandradrs
*  Description:
*     Declares container control for application.
*  Version  :
*  Copyright: 
* ============================================================================
*/

#ifndef MESAYNGERS60V2CONTAINER_H
#define MESAYNGERS60V2CONTAINER_H

#include <coecntrl.h>
#include <aknview.h>
   
class CEikLabel;
class CEikEdwin;

class CMesayngers60v2Container : public CCoeControl, MCoeControlObserver {
    public:
        CMesayngers60v2Container();
        void ConstructL(const TRect& aRect);
        virtual ~CMesayngers60v2Container();

    public:
        void FocusTo(TInt aCommand);

    private:
        void SizeChanged();
        TInt CountComponentControls() const;
        CCoeControl* ComponentControl(TInt aIndex) const;
        void Draw(const TRect& aRect) const;
        TKeyResponse OfferKeyEventL(const TKeyEvent& aKeyEvent, TEventCode aType);

    private:
        void HandleControlEventL(CCoeControl* aControl,TCoeEvent aEventType);

    private:        
        CEikLabel* iLblChatFld;
        CEikEdwin* iChatFld;

};

#endif