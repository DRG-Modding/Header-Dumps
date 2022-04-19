#ifndef UE4SS_SDK_UI_GradientMasked_Canvas_HPP
#define UE4SS_SDK_UI_GradientMasked_Canvas_HPP

class UUI_GradientMasked_Canvas_C : public UUI_GradientMasked_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* Content;
    class URetainerBox* Retainer;

    void OnMaterialRefreshed();
    void ExecuteUbergraph_UI_GradientMasked_Canvas(int32 EntryPoint);
};

#endif
