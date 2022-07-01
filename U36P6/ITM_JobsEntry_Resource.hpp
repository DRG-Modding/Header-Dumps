#ifndef UE4SS_SDK_ITM_JobsEntry_Resource_HPP
#define UE4SS_SDK_ITM_JobsEntry_Resource_HPP

class UITM_JobsEntry_Resource_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATA_Level;
    class UImage* Icon;
    class UTexture2D* Texture;
    FLinearColor Tint;
    FText Text;

    void PreConstruct(bool IsDesignTime);
    void SetData(int32 RequiredLevel);
    void ExecuteUbergraph_ITM_JobsEntry_Resource(int32 EntryPoint);
};

#endif
