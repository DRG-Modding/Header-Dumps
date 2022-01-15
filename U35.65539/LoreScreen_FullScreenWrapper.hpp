#ifndef UE4SS_SDK_LoreScreen_FullScreenWrapper_HPP
#define UE4SS_SDK_LoreScreen_FullScreenWrapper_HPP

class ULoreScreen_FullScreenWrapper_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ScreenIntro;
    UBasic_ButtonScalable2_C* CloseButton;
    ULoreScreen_BiomeSpecific_C* LoreScreen_Biome;
    UOverlay* Overlay_WidgetHolder;
    ULoreScreen_Master_C* ChildLoreWidget;

    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnScreenOut();
    void AddLoreWidget(ULoreScreen_Master_C* Widget);
    void OnShown();
    void OnNewTopWindow();
    void ExecuteUbergraph_LoreScreen_FullScreenWrapper(int32 EntryPoint, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, ULoreScreen_Master_C* K2Node_CustomEvent_Widget, UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
}

#endif
