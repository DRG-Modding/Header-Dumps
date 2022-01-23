#ifndef UE4SS_SDK_HUD_PlayerMic_HPP
#define UE4SS_SDK_HUD_PlayerMic_HPP

class UHUD_PlayerMic_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* IMG_MIC;

    void Construct();
    void OnPlayerVoiceStatusChanged_Event_0(bool voiceChatting);
    void ExecuteUbergraph_HUD_PlayerMic(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_HUD_PlayerMicK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_CustomEvent_voiceChatting, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, ESlateVisibility K2Node_Select_Default);
};

#endif
