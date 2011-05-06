<?php

/**
 * Implementation of hook_content_default_fields().
 */
function obec_register_content_default_fields() {
  $fields = array();

  // Exported field: field_profile_address
  $fields['profile-field_profile_address'] = array(
    'field_name' => 'field_profile_address',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_address][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'ที่อยู่',
      'weight' => '-4',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_email_1
  $fields['profile-field_profile_email_1'] = array(
    'field_name' => 'field_profile_email_1',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_email_1][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'อีเมล 1',
      'weight' => 0,
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_email_2
  $fields['profile-field_profile_email_2'] = array(
    'field_name' => 'field_profile_email_2',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_email_2][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'อีเมล 2',
      'weight' => '1',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_position
  $fields['profile-field_profile_position'] = array(
    'field_name' => 'field_profile_position',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_position][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'ตำแหน่ง',
      'weight' => '-2',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_province
  $fields['profile-field_profile_province'] = array(
    'field_name' => 'field_profile_province',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'กรุงเทพฯ|กรุงเทพฯ
กาญจนบุรี|กาญจนบุรี
ฉะเชิงเทรา|ฉะเชิงเทรา
ชัยนาท|ชัยนาท
นครปฐม|นครปฐม
นนทบุรี|นนทบุรี
ปทุมธานี|ปทุมธานี
ประจวบคีรีขันธ์|ประจวบคีรีขันธ์
พระนครศรีอยุธยา|พระนครศรีอยุธยา
เพชรบุรี|เพชรบุรี
เพชรบุรี|เพชรบุรี
ราชบุรี|ราชบุรี
ลพบุรี|ลพบุรี
สมุทรปราการ|สมุทรปราการ
สมุทรสงคราม|สมุทรสงคราม
สมุทรสาคร|สมุทรสาคร
สระบุรี|สระบุรี
สิงห์บุรี|สิงห์บุรี
สุพรรณบุรี|สุพรรณบุรี
อ่างทอง|อ่างทอง
จันทบุรี|จันทบุรี
ชลบุรี|ชลบุรี
ตราด|ตราด
นครนายก|นครนายก
ปราจีนบุรี|ปราจีนบุรี
ระยอง|ระยอง
สระแก้ว|สระแก้ว
กาฬสินธุ์|กาฬสินธุ์
ขอนแก่น|ขอนแก่น
ชัยภูมิ|ชัยภูมิ
นครพนม|นครพนม
นครราชสีมา|นครราชสีมา
บุรีรัมย์|บุรีรัมย์
มหาสารคาม|มหาสารคาม
มุกดาหาร|มุกดาหาร
ยโสธร|ยโสธร
ร้อยเอ็ด|ร้อยเอ็ด
เลย|เลย
ศรีสะเกษ|ศรีสะเกษ
สกลนคร|สกลนคร
สุรินทร์|สุรินทร์
หนองคาย|หนองคาย
หนองบัวลำภู|หนองบัวลำภู
อำนาจเจริญ|อำนาจเจริญ
อุดรธานี|อุดรธานี
อุบลราชธานี|อุบลราชธานี
กำแพงเพชร|กำแพงเพชร
เชียงราย|เชียงราย
เชียงใหม่|เชียงใหม่
ตาก|ตาก
นครสวรรค์|นครสวรรค์
น่าน|น่าน
พะเยา|พะเยา
พิจิตร|พิจิตร
พิษณุโลก|พิษณุโลก
เพชรบูรณ์|เพชรบูรณ์
แพร่|แพร่
แม่ฮ่องสอน|แม่ฮ่องสอน
ลำปาง|ลำปาง
ลำพูน|ลำพูน
สุโขทัย|สุโขทัย
อุตรดิตถ์|อุตรดิตถ์
อุทัยธานี|อุทัยธานี
กระบี่|กระบี่
ชุมพร|ชุมพร
ตรัง|ตรัง
นครศรีธรรมราช|นครศรีธรรมราช
นราธิวาส|นราธิวาส
ปัตตานี|ปัตตานี
พังงา|พังงา
พัทลุง|พัทลุง
ภูเก็ต|ภูเก็ต
ยะลา|ยะลา
ระนอง|ระนอง
สงขลา|สงขลา
สตูล|สตูล
สุราษฎร์ธานี|สุราษฎร์ธานี',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'จังหวัด',
      'weight' => '-3',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_profile_tel
  $fields['profile-field_profile_tel'] = array(
    'field_name' => 'field_profile_tel',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_tel][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'เบอร์โทรศัพท์',
      'weight' => '-1',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_school_address
  $fields['school-field_school_address'] = array(
    'field_name' => 'field_school_address',
    'type_name' => 'school',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_school_address][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'ที่อยู่',
      'weight' => '36',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_school_approve_by
  $fields['school-field_school_approve_by'] = array(
    'field_name' => 'field_school_approve_by',
    'type_name' => 'school',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
    ),
    'referenceable_status' => '',
    'advanced_view' => '',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Approve',
      'weight' => '47',
      'description' => '',
      'type' => 'userreference_select',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_school_domain
  $fields['school-field_school_domain'] = array(
    'field_name' => 'field_school_domain',
    'type_name' => 'school',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_school_domain][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Domain',
      'weight' => '32',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_school_location
  $fields['school-field_school_location'] = array(
    'field_name' => 'field_school_location',
    'type_name' => 'school',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_school_location][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Location (google map)',
      'weight' => '40',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_school_name_en
  $fields['school-field_school_name_en'] = array(
    'field_name' => 'field_school_name_en',
    'type_name' => 'school',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_school_name_en][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'School name [en]',
      'weight' => '33',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_school_password
  $fields['school-field_school_password'] = array(
    'field_name' => 'field_school_password',
    'type_name' => 'school',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_school_password][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Password',
      'weight' => '34',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_school_province
  $fields['school-field_school_province'] = array(
    'field_name' => 'field_school_province',
    'type_name' => 'school',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_school_province][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'จังหวัด',
      'weight' => '38',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_school_tel
  $fields['school-field_school_tel'] = array(
    'field_name' => 'field_school_tel',
    'type_name' => 'school',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_school_tel][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'เบอร์โทรศัพท์',
      'weight' => '39',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_school_url
  $fields['school-field_school_url'] = array(
    'field_name' => 'field_school_url',
    'type_name' => 'school',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_school_url][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Url',
      'weight' => '31',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_school_zipcode
  $fields['school-field_school_zipcode'] = array(
    'field_name' => 'field_school_zipcode',
    'type_name' => 'school',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '5',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_school_zipcode][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'รหัสไปรษณีย์',
      'weight' => '37',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Approve');
  t('Domain');
  t('Location (google map)');
  t('Password');
  t('School name [en]');
  t('Url');
  t('จังหวัด');
  t('ตำแหน่ง');
  t('ที่อยู่');
  t('รหัสไปรษณีย์');
  t('อีเมล 1');
  t('อีเมล 2');
  t('เบอร์โทรศัพท์');

  return $fields;
}
