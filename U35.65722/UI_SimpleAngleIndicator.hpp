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

    void SetAngle(float AngleDegrees, float CallFunc_ClampAngle_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_UI_SimpleAngleIndicator(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_IntFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_GetActorEyesViewPoint_OutLocation, FRotator CallFunc_GetActorEyesViewPoint_OutRotation, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

#endif
