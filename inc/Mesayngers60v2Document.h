/*
* ============================================================================
*  Name     : CMesayngers60v2Document from Mesayngers60v2Document.h
*  Part of  : mesayngers60v2
*  Created  : 4/9/2024 by adinandradrs
*  Description:
*     Declares document for application.
*  Version  :
*  Copyright: 
* ============================================================================
*/

#ifndef MESAYNGERS60V2DOCUMENT_H
#define MESAYNGERS60V2DOCUMENT_H

#include <akndoc.h>

class  CEikAppUi;

class CMesayngers60v2Document : public CAknDocument {
    public:
        static CMesayngers60v2Document* NewL(CEikApplication& aApp);
        virtual ~CMesayngers60v2Document();

    public: 

    public: 

    protected:

    protected:

    private:
        CMesayngers60v2Document(CEikApplication& aApp);
        void ConstructL();

    private:
        CEikAppUi* CreateAppUiL();
};

#endif