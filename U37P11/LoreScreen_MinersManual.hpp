#ifndef UE4SS_SDK_LoreScreen_MinersManual_HPP
#define UE4SS_SDK_LoreScreen_MinersManual_HPP

class ULoreScreen_MinersManual_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_381;
    class ULoreScreen_Template_C* LoreScreen_Template;
    bool IsHovering;
    class UAudioComponent* HoverSound;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_LoreScreen_MinersManual(int32 EntryPoint);
};

#endif
