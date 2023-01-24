#ifndef UE4SS_SDK_UI_PipelineBuilder_Crosshair_HPP
#define UE4SS_SDK_UI_PipelineBuilder_Crosshair_HPP

class UUI_PipelineBuilder_Crosshair_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* Box;
    class UImage* IMG_Status;
    class UBasic_Label_C* Txt_Status;

    void SetState(const EPlaceableObstructionType State);
    void Construct();
    void ExecuteUbergraph_UI_PipelineBuilder_Crosshair(int32 EntryPoint);
};

#endif
