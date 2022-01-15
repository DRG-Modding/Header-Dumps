#ifndef UE4SS_SDK_UI_GradientMasked_Canvas_HPP
#define UE4SS_SDK_UI_GradientMasked_Canvas_HPP

class UUI_GradientMasked_Canvas_C : UUI_GradientMasked_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNamedSlot* Content;
    URetainerBox* Retainer;

    void OnMaterialRefreshed();
    void ExecuteUbergraph_UI_GradientMasked_Canvas(int32 EntryPoint, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_Material);
}

#endif
