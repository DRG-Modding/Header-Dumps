#ifndef UE4SS_SDK_UI_RoundedImage_HPP
#define UE4SS_SDK_UI_RoundedImage_HPP

class UUI_RoundedImage_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* RoundedImage;
    UMaterialInstanceDynamic* Material;
    UTexture2D* Texture;
    float Radius;
    float EdgeSharpness;

    void SetImage(UTexture2D* Texture, bool CallFunc_IsValid_ReturnValue);
    void OnPaint(FPaintContext& Context, FVector2D CallFunc_GetDrawSize_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
    void UpdateMaterial(bool CallFunc_IsValid_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_RoundedImage(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
