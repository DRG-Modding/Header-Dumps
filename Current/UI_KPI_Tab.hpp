#ifndef UE4SS_SDK_UI_KPI_Tab_HPP
#define UE4SS_SDK_UI_KPI_Tab_HPP

class UUI_KPI_Tab_C : public UUserWidget
{

    void HandleMouseEvent(const FPointerEvent& InMouseEvent, bool InUp, bool& OutHandled);
    void HandleKeyEvent(FKeyEvent InKeyEvent, bool InUp, bool& OutHandled);
};

#endif
