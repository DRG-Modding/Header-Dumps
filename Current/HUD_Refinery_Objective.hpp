#ifndef UE4SS_SDK_HUD_Refinery_Objective_HPP
#define UE4SS_SDK_HUD_Refinery_Objective_HPP

class UHUD_Refinery_Objective_C : public UOptionalObjectiveWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UImage* Image_Separator;
    class UImage* Line_MainPercent;
    class UITM_Refinery_Pipeline_C* Pipeline_Center;
    class UITM_Refinery_Pipeline_C* Pipeline_Left;
    class UITM_Refinery_Pipeline_C* Pipeline_Right;
    class UProgressBar* Refinery_Progressbar;
    class UTextBlock* Text_MainPercent;
    class UTextBlock* TextBlock_Title;
    class URefineryObjective* Objective;
    class AFSDRefinery* Refinery;

    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void OnProgressChanged(float InProgress01);
    void OnSetupPipeline(class APipelineStart* InPipelineStart);
    void SetRefinery(class AFSDRefinery* InRefinery);
    void SetObjective(class UObjective* obj);
    void Construct();
    void ExecuteUbergraph_HUD_Refinery_Objective(int32 EntryPoint);
};

#endif
