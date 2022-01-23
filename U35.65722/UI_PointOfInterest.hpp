#ifndef UE4SS_SDK_UI_PointOfInterest_HPP
#define UE4SS_SDK_UI_PointOfInterest_HPP

class UUI_PointOfInterest_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Outro;
    class UWidgetAnimation* Intro;
    class UWidgetAnimation* Pulse;
    class UImage* Icon;
    class UImage* Ring;
    FUI_PointOfInterest_CFinished Finished;
    void Finished();
    class UTexture2D* Texture;

    void Init(class UTexture2D* Texture);
    void Construct();
    void OnIntroFinished();
    void OnOutroFinished();
    void ExecuteUbergraph_UI_PointOfInterest(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_UI_PointOfInterestK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_UI_PointOfInterestK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UTexture2D* K2Node_CustomEvent_Texture, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
    void Finished__DelegateSignature();
};

#endif
