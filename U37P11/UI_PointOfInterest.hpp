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
    void ExecuteUbergraph_UI_PointOfInterest(int32 EntryPoint);
    void Finished__DelegateSignature();
};

#endif
