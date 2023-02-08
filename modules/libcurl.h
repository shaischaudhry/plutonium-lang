#include "PltObject.h"

extern "C"
{

    PltObject init();
    //
    //Functions
    PltObject STRERROR(PltObject*,int);
    //Methods of our Wrapper Curl Object(not real curl object)
    PltObject curlklass__construct__(PltObject*,int);//
    PltObject setopt(PltObject*,int);
    PltObject perform(PltObject*,int);
    PltObject cleanup(PltObject*,int);
    PltObject getinfo(PltObject*,int);
    PltObject ESCAPE(PltObject*,int);
    PltObject UNESCAPE(PltObject*,int);
    PltObject curlklass__destroy(PltObject*,int);
    //Methods of MimeObject
    PltObject mime__construct__(PltObject*,int);
    PltObject addpart(PltObject*,int);
    PltObject MIME_FREE(PltObject*,int);
    //Methods MimePartObject
    PltObject MIME_NAME(PltObject*,int);
    PltObject MIME_DATA(PltObject*,int);
    PltObject destroyMIMEPART(PltObject*,int);
}