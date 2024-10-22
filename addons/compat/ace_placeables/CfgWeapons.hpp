#define PATCH_KKA3_ITEM(className) \
    class className: kka3_itemcore { \
        class ItemInfo: InventoryItem_Base_F { \
            type = TYPE_BIPOD; \
        }; \
    }

class CfgWeapons {
    class ItemCore;
    class InventoryItem_Base_F;
    class kka3_itemcore: ItemCore {
        type = TYPE_ITEM;
        simulation = "Weapon";
        detectRange = 0;
        ace_asItem = 1;
        // kka3_itemcore doesn't have an ItemInfo
    };

    // Each item redefines ItemInfo instead of inheriting from kka3_itemcore
    PATCH_KKA3_ITEM(kka3_ace_extension_Campfire_burning_F);
    PATCH_KKA3_ITEM(kka3_ace_extension_Land_BagFence_Long_F);
    PATCH_KKA3_ITEM(kka3_ace_extension_Land_BagFence_Round_F);
    PATCH_KKA3_ITEM(kka3_ace_extension_Land_Camping_Light_off_F);
    PATCH_KKA3_ITEM(kka3_ace_extension_Land_CampingChair_V1_F);
    PATCH_KKA3_ITEM(kka3_ace_extension_Land_CampingTable_F);
    PATCH_KKA3_ITEM(kka3_ace_extension_Land_DrillAku_F);
    PATCH_KKA3_ITEM(kka3_ace_extension_Land_Pallet_vertical_F);
    PATCH_KKA3_ITEM(kka3_ace_extension_Land_PortableLight_single_F);
    PATCH_KKA3_ITEM(kka3_ace_extension_Land_Wrench_F);
    PATCH_KKA3_ITEM(kka3_ace_extension_roadbarrier_f);
    PATCH_KKA3_ITEM(kka3_ace_extension_roadbarrier_small_f);
    PATCH_KKA3_ITEM(kka3_ace_extension_roadcone_f);
    PATCH_KKA3_ITEM(kka3_ace_extension_roadcone_l_f);
    PATCH_KKA3_ITEM(kka3_ace_extension_TapeSign_F);
    PATCH_KKA3_ITEM(kka3_ace_extension_Target_F);
};