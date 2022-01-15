#ifndef UE4SS_SDK_AnimatedDRGlogo_HPP
#define UE4SS_SDK_AnimatedDRGlogo_HPP

class UAnimatedDRGlogo_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Flash4;
    UWidgetAnimation* Flash3;
    UWidgetAnimation* Flash2;
    UWidgetAnimation* Flash1;
    UWidgetAnimation* Idle;
    UImage* Logo;

    void Construct();
    void ExecuteUbergraph_AnimatedDRGlogo(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue, const TArray<UWidgetAnimation*>& K2Node_MakeArray_Array, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, UWidgetAnimation* CallFunc_Array_Get_Item, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
