#ifndef UE4SS_SDK_HUD_PlayerDown_HPP
#define UE4SS_SDK_HUD_PlayerDown_HPP

class UHUD_PlayerDown_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Brackets01;
    class UImage* Brackets02;
    class UUI_AdvancedLabel_C* CamCycleLabel;
    class UWidgetSwitcher* CanvasSwitcher;
    class UTextBlock* ClassLabel;
    class UUI_AdvancedLabel_C* HelpLabel;
    class UHUD_ActivatablePerks_C* HUD_ActivatablePerks;
    class UHUD_Armor_Base_C* HUD_Armor_Base;
    class UHUD_Health_Base_C* HUD_Health_Base;
    class UCanvasPanel* PlayerCanvas;
    class UTextBlock* PlayerName;
    class UScreenOverlay_Incapacitated_C* ScreenOverlay_Incapacitated;
    class UCanvasPanel* ShouldCamCanvas;
    class UTextBlock* TextBlock_0;
    class UAudioComponent* StaticNoiseAudio;

    ESlateVisibility GetCycleCameraVisibility(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsDown_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void Construct();
    void OnDownCameraTargetChanged(class APlayerCharacter* Target);
    void PreConstruct(bool IsDesignTime);
    void End Player Down();
    void ReceiveNewVisibility(ESlateVisibility NewVisibility);
    void ExecuteUbergraph_HUD_PlayerDown(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, class APlayerCharacter* K2Node_CustomEvent_Target, const FText CallFunc_GetHeroName_ReturnValue, class APlayerCharacter* CallFunc_GetDownCameraTarget_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FString CallFunc_GetPlayerName_ReturnValue, bool CallFunc_IsValid_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, FExecuteUbergraph_HUD_PlayerDownK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDown_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, ESlateVisibility K2Node_Event_NewVisibility, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1);
};

#endif
