#ifndef UE4SS_SDK_ITM_Refinery_Pipeline_HPP
#define UE4SS_SDK_ITM_Refinery_Pipeline_HPP

class UITM_Refinery_Pipeline_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_Pipeline_BrokenIcon_C* BrokenIcon;
    class UImage* Pipeline_BG;
    class UImage* Pipeline_Filled;
    class UImage* Pipeline_Outline;
    class UTexture2D* ImageBackground;
    class UTexture2D* ImageFilled;
    class UTexture2D* ImageOutline;
    int32 BrokenIconSize;
    FMargin BrokenIconPadding;
    class APipelineStart* PipelineStart;

    void OnStateChanged(class APipelineStart* InPipelineStart, EPipelineBuildState InPipelineState);
    void SetPipelineStart(class APipelineStart* InPipelineStart);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Refinery_Pipeline(int32 EntryPoint);
};

#endif
