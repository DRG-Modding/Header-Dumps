#ifndef UE4SS_SDK_ScreenOverlay_Margins_HPP
#define UE4SS_SDK_ScreenOverlay_Margins_HPP

class UScreenOverlay_Margins_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* BottomImage;
    UImage* LeftImage;
    UImage* RightImage;
    UImage* TopImage;
    FMargin Margins;
    UMaterialInterface* Material;

    UMaterialInstanceDynamic* GetDynamicMaterial(bool CallFunc_IsValid_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void SetMargins(FMargin Margins);
    void SetMaterial(UMaterialInterface* Material, UMaterialInstanceDynamic*& OutDynamicMaterial, UMaterialInstanceDynamic* DynamicMaterial, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void OnPaint(FPaintContext& Context, float SideWidth, float SideHeight, float RightPadding, float LeftPadding, float BottomPadding, float TopPadding, FVector2D Size, FVector2D CallFunc_GetDrawSize_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_2, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector2D CallFunc_MakeVector2D_ReturnValue_3);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ScreenOverlay_Margins(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UMaterialInstanceDynamic* CallFunc_SetMaterial_OutDynamicMaterial);
}

#endif
