#ifndef UE4SS_SDK_ITM_SeasonChallengeIcon_HPP
#define UE4SS_SDK_ITM_SeasonChallengeIcon_HPP

class UITM_SeasonChallengeIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Glow;
    class UImage* Icon_Glow;
    class UImage* Image_Challenge;

    void SetIconHovered(bool InHovered, class UTexture2D* Icon, FLinearColor Color);
    void ExecuteUbergraph_ITM_SeasonChallengeIcon(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool K2Node_CustomEvent_InHovered, class UTexture2D* K2Node_CustomEvent_Icon, FLinearColor K2Node_CustomEvent_Color, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, ESlateVisibility K2Node_Select_Default);
};

#endif
