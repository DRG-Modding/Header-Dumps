#ifndef UE4SS_SDK_ITM_MisSel_RegionImage_HPP
#define UE4SS_SDK_ITM_MisSel_RegionImage_HPP

class UITM_MisSel_RegionImage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* RegionImage;
    FSlateBrush Image;
    FVector2D RegionCenter;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MisSel_RegionImage(int32 EntryPoint);
};

#endif
