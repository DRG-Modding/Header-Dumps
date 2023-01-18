#ifndef UE4SS_SDK_OnScreenIndicator_MiniMule_Build_HPP
#define UE4SS_SDK_OnScreenIndicator_MiniMule_Build_HPP

class UOnScreenIndicator_MiniMule_Build_C : public UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Img_Icon;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_MiniMule_Build(int32 EntryPoint);
};

#endif
