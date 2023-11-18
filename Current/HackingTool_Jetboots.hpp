#ifndef UE4SS_SDK_HackingTool_Jetboots_HPP
#define UE4SS_SDK_HackingTool_Jetboots_HPP

class UHackingTool_Jetboots_C : public UHackingToolWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimEnableInterface;
    class UWidgetAnimation* AnimFindChip;
    class UWidgetAnimation* AnimZoom;
    class UUI_HackingTool_Chip_C* Chip;
    class UUI_HackingTool_Grid_C* Grid_Image;
    class UUI_HackingTool_Button_C* Interface_Button;
    class UUI_HackingTool_Header_C* Interface_Header;
    class UUI_HackingTool_Progress_C* Interface_Progress;
    class UUI_JettyBoots_Game_C* JettyBoots_Game;
    class UCanvasPanel* UI_Canvas;
    class UAudioComponent* AmbientAudioComponent;
    class UJettyBootSettings* LevelSettings;

    void Finished_94D73EF544B2F122FA0E3081DAC6AE14();
    void Finished_661252654895433540ECBEA6768753E2();
    void Finished_B7281C05489FC801BDD3239EE3A97710();
    void ReceiveActionPressed();
    void ReceiveActionReleased();
    void BndEvt__HackingTool_Jetboots_FlappyBoots_Game_K2Node_ComponentBoundEvent_0_OnDistanceChanged__DelegateSignature(float InDistance);
    void BndEvt__HackingTool_Jetboots_FlappyBoots_Game_K2Node_ComponentBoundEvent_4_OnProgressChanged__DelegateSignature(int32 InCurrentGate, int32 InTotalGates);
    void ReceiveHackingStarted();
    void ReceiveHackingToolUnequipped();
    void BndEvt__HackingTool_Jetboots_JettyBoots_Game_K2Node_ComponentBoundEvent_5_OnGameStateChanged__DelegateSignature(TEnumAsByte<ENUM_JettyBoots_GameState::Type> InState, TEnumAsByte<ENUM_JettyBoots_GameState::Type> InPreviousState);
    void DoIntro();
    void DoAnimEnableInterface();
    void ExecuteUbergraph_HackingTool_Jetboots(int32 EntryPoint);
};

#endif
