#ifndef UE4SS_SDK_LoreScreen_FullScreenWrapper_HPP
#define UE4SS_SDK_LoreScreen_FullScreenWrapper_HPP

class ULoreScreen_FullScreenWrapper_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ScreenIntro;
    class UBasic_ButtonScalable2_C* CloseButton;
    class ULoreScreen_BiomeSpecific_C* LoreScreen_Biome;
    class UOverlay* Overlay_WidgetHolder;
    class ULoreScreen_Master_C* ChildLoreWidget;

    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnScreenOut();
    void AddLoreWidget(class ULoreScreen_Master_C* Widget);
    void OnShown();
    void OnNewTopWindow();
    void ExecuteUbergraph_LoreScreen_FullScreenWrapper(int32 EntryPoint, FExecuteUbergraph_LoreScreen_FullScreenWrapperK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class ULoreScreen_Master_C* K2Node_CustomEvent_Widget, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
};

#endif
