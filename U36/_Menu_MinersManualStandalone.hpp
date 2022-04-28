#ifndef UE4SS_SDK__Menu_MinersManualStandalone_HPP
#define UE4SS_SDK__Menu_MinersManualStandalone_HPP

class U_Menu_MinersManualStandalone_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_MenuBackground_C* ITM_EscapeMenuBackground;
    class UOverlay* Overlay_Holder;
    class U_MENU_MinersManual_C* Menu_MinersManual;

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Construct();
    void OnMinersManualClosed(class UWindowWidget* Window);
    void OnShown();
    void OpenMinersManualFromID(EMinersManualSection Section, const FGuid& ID);
    void OpenMinersManualPage(EMinersManualSinglePage page);
    void ExecuteUbergraph__Menu_MinersManualStandalone(int32 EntryPoint);
};

#endif
