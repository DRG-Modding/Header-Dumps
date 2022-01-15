#ifndef UE4SS_SDK_UI_RoundedCanvas_HPP
#define UE4SS_SDK_UI_RoundedCanvas_HPP

class UUI_RoundedCanvas_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNamedSlot* Content;
    URetainerBox* MaskRetainer;
    UMaterialInstanceDynamic* Material;
    float Radius;
    float EdgeSharpness;

    void OnPaint(FPaintContext& Context, FVector2D CallFunc_GetDrawSize_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
    void UpdateMaterial(bool CallFunc_IsValid_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_RoundedCanvas(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
