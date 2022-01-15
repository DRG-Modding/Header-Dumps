#ifndef UE4SS_SDK_ESI_Facility_Caretaker_HPP
#define UE4SS_SDK_ESI_Facility_Caretaker_HPP

class AESI_Facility_Caretaker_C : UESI_Spider_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USkeletalMeshComponent* SkeletalMesh4;
    USkeletalMeshComponent* SkeletalMesh3;
    USkeletalMeshComponent* SkeletalMesh2;
    USkeletalMeshComponent* SkeletalMesh1;
    USkeletalMeshComponent* ActiveEye;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ESI_Facility_Caretaker(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_2);
}

#endif
