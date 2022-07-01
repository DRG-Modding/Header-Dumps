#ifndef UE4SS_SDK_ITM_Pipeline_BrokenIcon_HPP
#define UE4SS_SDK_ITM_Pipeline_BrokenIcon_HPP

class UITM_Pipeline_BrokenIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimActive;
    class USizeBox* ImageSizer;
    int32 Size;
    bool IconActive;

    void SetIconActive(bool Inactive);
    void SetSize(int32 InSize);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Pipeline_BrokenIcon(int32 EntryPoint);
};

#endif
