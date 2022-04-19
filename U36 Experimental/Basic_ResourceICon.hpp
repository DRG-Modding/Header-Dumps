#ifndef UE4SS_SDK_Basic_ResourceICon_HPP
#define UE4SS_SDK_Basic_ResourceICon_HPP

class UBasic_ResourceIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ResourceIcon;
    float IconSize;
    class UBasic_ToolTip_C* ToolTip;
    bool ShowToolTip;

    void SetIconSize(float InSize);
    void SetResource(class UResourceData* Resource);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_ResourceIcon(int32 EntryPoint);
};

#endif
