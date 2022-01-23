#ifndef UE4SS_SDK_HUD_MicrophoneIndicator_HPP
#define UE4SS_SDK_HUD_MicrophoneIndicator_HPP

class UHUD_MicrophoneIndicator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon;

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_HUD_MicrophoneIndicator(int32 EntryPoint, bool CallFunc_IsVoiceChatting_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

#endif
