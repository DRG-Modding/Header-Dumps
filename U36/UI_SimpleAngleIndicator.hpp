#ifndef UE4SS_SDK_UI_SimpleAngleIndicator_HPP
#define UE4SS_SDK_UI_SimpleAngleIndicator_HPP

class UUI_SimpleAngleIndicator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimFadeIn;
    class UUI_ImageTinted_C* ArrowLeft;
    class UUI_ImageTinted_C* ArrowRight;
    class UCanvasPanel* ClippingCanvas;
    class USizeBox* SizeRanges;
    float Angle;
    float HeightOffset;
    FVector2D ClippingSize;
    float ArrowSize;
    float ArrowOffset;

    void SetAngle(float AngleDegrees);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_UI_SimpleAngleIndicator(int32 EntryPoint);
};

#endif
