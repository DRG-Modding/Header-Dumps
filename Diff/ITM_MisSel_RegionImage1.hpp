#ifndef UE4SS_SDK_ITM_MisSel_RegionImage1_HPP
#define UE4SS_SDK_ITM_MisSel_RegionImage1_HPP

class UITM_MisSel_RegionImage1_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* RegionImage;
    FSlateBrush Image;
    FVector2D RegionCenter;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MisSel_RegionImage1(int32 EntryPoint);
};

#endif
