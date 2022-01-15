#ifndef UE4SS_SDK_UI_PointOfInterest_HPP
#define UE4SS_SDK_UI_PointOfInterest_HPP

class UUI_PointOfInterest_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Outro;
    UWidgetAnimation* Intro;
    UWidgetAnimation* Pulse;
    UImage* Icon;
    UImage* Ring;
    FUI_PointOfInterest_CFinished Finished;
    void Finished();
    UTexture2D* Texture;

    void Init(UTexture2D* Texture);
    void Construct();
    void OnIntroFinished();
    void OnOutroFinished();
    void ExecuteUbergraph_UI_PointOfInterest(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UTexture2D* K2Node_CustomEvent_Texture, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
    void Finished__DelegateSignature();
}

#endif
