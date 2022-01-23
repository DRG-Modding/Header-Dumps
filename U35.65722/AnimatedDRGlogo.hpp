#ifndef UE4SS_SDK_AnimatedDRGlogo_HPP
#define UE4SS_SDK_AnimatedDRGlogo_HPP

class UAnimatedDRGlogo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Flash4;
    class UWidgetAnimation* Flash3;
    class UWidgetAnimation* Flash2;
    class UWidgetAnimation* Flash1;
    class UWidgetAnimation* Idle;
    class UImage* Logo;

    void Construct();
    void ExecuteUbergraph_AnimatedDRGlogo(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue, const TArray<class UWidgetAnimation*>& K2Node_MakeArray_Array, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UWidgetAnimation* CallFunc_Array_Get_Item, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

#endif
