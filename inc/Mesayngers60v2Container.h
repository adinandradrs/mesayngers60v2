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
        ~CMesayngers60v2Container();

    public:

    public:

    private:
        void SizeChanged();
        TInt CountComponentControls() const;
        CCoeControl* ComponentControl(TInt aIndex) const;
        void Draw(const TRect& aRect) const;
        void HandleControlEventL(CCoeControl* aControl,TCoeEvent aEventType);

    private:        
        CEikLabel* iLabel;
        CEikLabel* iToDoLabel;
        CEikLabel* iExtLabel;
        CEikEdwin* iEdwin;

};

#endif