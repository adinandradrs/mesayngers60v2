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

// INCLUDES
#include <akndoc.h>
   
// CONSTANTS

// FORWARD DECLARATIONS
class  CEikAppUi;

// CLASS DECLARATION

/**
*  CMesayngers60v2Document application class.
*/
class CMesayngers60v2Document : public CAknDocument
    {
    public: // Constructors and destructor
        /**
        * Two-phased constructor.
        */
        static CMesayngers60v2Document* NewL(CEikApplication& aApp);

        /**
        * Destructor.
        */
        virtual ~CMesayngers60v2Document();

    public: // New functions

    public: // Functions from base classes
    protected:  // New functions

    protected:  // Functions from base classes

    private:

        /**
        * EPOC default constructor.
        */
        CMesayngers60v2Document(CEikApplication& aApp);
        void ConstructL();

    private:

        /**
        * From CEikDocument, create CMesayngers60v2AppUi "App UI" object.
        */
        CEikAppUi* CreateAppUiL();
    };

#endif

// End of File

