#ifndef UE4SS_SDK_DamageTextWidget_HPP
#define UE4SS_SDK_DamageTextWidget_HPP

class UDamageTextWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FloatingText_Right_Far;
    class UWidgetAnimation* FloatingText_Right;
    class UWidgetAnimation* FloatingText_Left_Far;
    class UWidgetAnimation* FloatingText_Left;
    class UWidgetAnimation* FloatingText_Center;
    class UTextBlock* DamageText;
    class UWidgetAnimation* FloatingText;
    FText ZeroText;

    void PlayDamageText(float Damage);
    void ExecuteUbergraph_DamageTextWidget(int32 EntryPoint, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, float K2Node_CustomEvent_Damage, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue);
};

#endif
