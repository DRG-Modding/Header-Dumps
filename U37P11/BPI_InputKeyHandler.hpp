#ifndef UE4SS_SDK_BPI_InputKeyHandler_HPP
#define UE4SS_SDK_BPI_InputKeyHandler_HPP

class IBPI_InputKeyHandler_C : public IInterface
{

    void HandleKeyInput(FKeyEvent InKeyEvent, bool InPressed, FEventReply& OutReply);
};

#endif
